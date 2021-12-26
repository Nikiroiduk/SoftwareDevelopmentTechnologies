int main() {
	return 0;
}

//-----------------------------
private void set_mode(bool mod)
{
	label1.Enabled = mod;
	button1.Enabled = mod;
	button2.Enabled = mod;
	button3.Enabled = !mod;
	button4.Enabled = !mod;
}
//-----------------------------

//-----------------------------
return m_driverStatusNames[driver.Status];
//-----------------------------

//-----------------------------
uint i;
if (i == 1)
{
	...
}
//-----------------------------

//-----------------------------
string destination = "";
for (auto item : source) {
	destination += item;
}
//-----------------------------

//-----------------------------
Bool IsNumber(string str) {
	for (auto elem : str) {
		if (!IsNumber(elem)) {
			return false;
		}
	}
	return true;
}
//-----------------------------

//-----------------------------
string[] days = Enum.GetNames(typeof(DayOfWeek));
//-----------------------------

//-----------------------------
DateTime dt = DateTime.Now;
Console.WriteLine(dt.ToString("--HH:mm:ss--"));
//-----------------------------

//-----------------------------
return Counter != 0;
//-----------------------------

//-----------------------------
if (Connceted == 0)
	rez = setup();
f1_end = true;
//-----------------------------

//-----------------------------
List<int> arr = new List<int>();
List<int> tmpArr = new List<int>();
for (int i = 0; i < arr.Count && arr[i] <= 100; i++)
{
	tmpArr.Add(arr[i]);
}
arr = tmpArr;
//-----------------------------

//-----------------------------
var meh = sourceIDs.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
sourceId = Convert.ToInt32(meh[0]);
//-----------------------------

//-----------------------------
public string generateEMail()
{
	string res;
	string[] meh = PersonName.split(' ');
	res = $"{meh[0]}.{meh[1]}";
	if (res.Length > 20)
	{
		var tmp = new char[20];
		res.CopyTo(0, tmp, 0, 20);
		res = new string(tmp);
	}
	res += "@domain.ua";
	return res;
}
//-----------------------------

//-----------------------------
string GetTextDiv2(string text)
{
	int mid = text.Length / 2;
	int r = text.IndexOf(" ", mid);
	int l = text.IndexOf(" ", 0, mid);
	mid = r - mid > l - mid ? l : r;
	return $"&nbsp{text.Substring(0, mid)} <br/>&nbsp{text.Substring(mid, text.Length - mid)}";
}
//-----------------------------

//-----------------------------
string mailTo = ((Config.GetSetting("AdminNotifications_EmailAddress").Length <= 0)) ?
	"Something went wrong" : Config.GetSetting("AdminNotifications_EmailAddress");
//-----------------------------

//-----------------------------
public bool CheckPath(string path)
{
	var di = new DirectoryInfo(path);
	FileInfo[] DBFFiles = di.GetFiles("*.dbf");
	n += DBFFiles.Length;
	di = new DirectoryInfo(path + "SCLAD\\");
	DBFFiles = di.GetFiles("*.dbf");
	n += DBFFiles.Length;
	FileInfo[] FPTFiles = di.GetFiles("*.fpt");
	n += FPTFiles.Length;
	di = new DirectoryInfo(path + "REAL\\");
	DBFFiles = di.GetFiles("*.dbf");
	n += FPTFiles.Length;
	FPTFiles = di.GetFiles("*.fpt");
	n += FPTFiles.Length;
	di = new DirectoryInfo(path + "DOSTAVKA\\");
	DBFFiles = di.GetFiles("*.dbf");
	n += FPTFiles.Length;
	FPTFiles = di.GetFiles("*.fpt");
	n += FPTFiles.Length;

	if (n == 20)
	{
		return true;
	}
	return false;
}
//-----------------------------

//-----------------------------
txtContacts.Text = "";
foreach(string contact in contacts)
{
	txtContacts.Text += $"{contact};";
}
//-----------------------------

//-----------------------------
Game1.clou = !Game1.clou;
//-----------------------------
